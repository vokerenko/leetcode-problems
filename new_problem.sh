#!/bin/bash

# Check if the user provided a name
if [ -z "$1" ]; then
  echo "Usage: $0 <new-folder-name>"
  exit 1
fi

# Assign the first argument as the new folder name
NEW_FOLDER_NAME=$1

# Check if the "template" folder exists
if [ ! -d "template" ]; then
  echo "Template folder not found!"
  exit 1
fi

# Copy the template folder to the new folder name
cp -r template "$NEW_FOLDER_NAME"

# Confirm success
if [ $? -eq 0 ]; then
  echo "Folder '$NEW_FOLDER_NAME' created successfully."
else
  echo "Failed to create folder '$NEW_FOLDER_NAME'."
  exit 1
fi

