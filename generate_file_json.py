import os
import json

def generate_directory_json(root_dir):
    """Generates a JSON representation of a directory structure."""

    def _scan(dir_path):
        entries = []
        for item in os.listdir(dir_path):
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
    repo_root = "."  # Change this if your starting point is somewhere else. like 'labbook'
    file_data = generate_directory_json(repo_root)
    with open("files.json", "w") as f:
        json.dump(file_data, f, indent=4)
    print('Generated files.json successfully')