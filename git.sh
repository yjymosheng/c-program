#!/bin/bash

BRANCH = $( git branch | grep "*" | awk '{print $2}')
echo "$(BRANCH)"

cd /home/mosheng/c-program

git add .
git commit -m update
# git push
