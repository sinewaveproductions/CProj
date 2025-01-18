import os
import json

def generate_directory_json(root_dir):
    def _scan(dir_path):
        entries = []
        for item in os.listdir(dir_path):
            if item.startswith('.') or item in ['files.json', 'generate_file_json.py', 'index.html', 'style.css']:
                continue
            item_path = os.path.join(dir_path, item)
            if os.path.isdir(item_path):
                entries.append({
                    "name": item,
                    "type": "directory",
                    "children": _scan(item_path)
                })
            else:
                entries.append({
                   "name": item,
                    "type": "file",
                })
        return entries
    return _scan(root_dir)


if __name__ == "__main__":
    repo_root = "."
    file_data = generate_directory_json(repo_root)
    with open("files.json", "w") as f:
        json.dump(file_data, f, indent=4)
    print('Generated files.json successfully')