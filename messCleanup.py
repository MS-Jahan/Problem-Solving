from pathlib import Path
import traceback

deletedFiles = []

# for files with specific extensions
fileextensions = ["exe", "o"]
for extension in fileextensions:
    result = list(Path(".").glob('**/*.' + extension))

    for item in result:
        try:
            temp = item.absolute()
            item.unlink()
            deletedFiles.append(item.name)
        except Exception:
            print("\n")
            print(item)
            print(traceback.format_exc())


# for files without extension (i.e. binary file in linux)
result = list(Path(".").glob('**/*'))
for item in result:
    if "." not in str(item.name) and item.is_dir() == False and ".git" not in str(item.absolute()):
        try:
            temp = item.absolute()
            item.unlink()
            deletedFiles.append(item.name)
        except Exception:
            print("\n")
            print(item)
            print(traceback.format_exc())

if len(deletedFiles) == 0:
    print("No file has been deleted!")
else:
    print(str(len(deletedFiles)) + " file(s) was/were deleted:")
    i = 1
    for item in deletedFiles:
        print(str(i) + ". " + str(item))
        i += 1

