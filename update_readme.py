import os
import datetime

base_dir = '.'
readme_path = 'README.md'

day_folders = sorted([f for f in os.listdir(base_dir) if f.startswith('Day') and os.path.isdir(f)])
total_files = 0
progress_rows = ""

max_files_in_a_day = 0
day_file_counts = []

for folder in day_folders:
    folder_path = os.path.join(base_dir, folder)
    cpp_files = [f for f in os.listdir(folder_path) if f.endswith('.cpp')]
    file_count = len(cpp_files)
    total_files += file_count
    day_file_counts.append(file_count)
    if file_count > max_files_in_a_day:
        max_files_in_a_day = file_count

    # Guessing date from folder creation time
    date = datetime.date.fromtimestamp(os.path.getctime(folder_path))
    topic = folder.replace("_", " ").split("_", 1)[-1]

    # Generate a simple progress bar for files committed today (max 10 blocks)
    blocks = 10
    filled_blocks = int((file_count / max(1, max_files_in_a_day)) * blocks)
    empty_blocks = blocks - filled_blocks
    progress_bar = "█" * filled_blocks + "─" * empty_blocks

    progress_rows += f"| {date} | {file_count} | {topic} | `{progress_bar}` |\n"

# Generate overall progress bar for total days committed out of 90
total_days = len(day_folders)
total_days_max = 90
blocks = 20
filled_days = int((total_days / total_days_max) * blocks)
empty_days = blocks - filled_days
overall_progress_bar = "[" + "█" * filled_days + "─" * empty_days + "]"

# Read and update README.md
with open(readme_path, 'r') as file:
    content = file.read()

new_content = content
new_content = new_content.replace(
    '<!-- AUTO-INSERT-DATA -->', progress_rows + '<!-- AUTO-INSERT-DATA -->'
)
new_content = new_content.replace('<!-- DAYS_COUNT -->', str(total_days))
new_content = new_content.replace('<!-- FILES_COUNT -->', str(total_files))
new_content = new_content.replace('<!-- LAST_UPDATED -->', str(datetime.date.today()))
new_content = new_content.replace('<!-- AUTO-PROGRESS-BAR -->', overall_progress_bar)

# Only write to README if it has changed
if new_content != content:
    with open(readme_path, 'w') as file:
        file.write(new_content)
    print("README.md updated.")
else:
    print("README.md is already up-to-date. No changes made.")
