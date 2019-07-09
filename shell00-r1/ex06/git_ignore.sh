#!bin/sh
git status --ignored -s | grep ^! | cut -c4- | rev | cut -d "/" -f 1 | rev
