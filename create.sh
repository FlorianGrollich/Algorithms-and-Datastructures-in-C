read -r -p "How is the Datastruct or the algo called: " filename

# create Folder
mkdir "$filename"

#create Files
touch "$filename/$filename.c"
touch "$filename/$filename.h"
touch "$filename/$filename.md"

# Add default text to files
echo -e "#include \"$filename.h\"\n\nint main(){\n\n}" >> "$filename/$filename.c"
echo -e "#ifndef ${filename^^}_H\n#define ${filename^^}_H\n\n\n#endif //${filename^^}_H" >> "$filename/$filename.h"




echo "# $filename" >> "$filename/$filename.md"





