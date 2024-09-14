#!/bin/bash

BRANCH=$( git branch | grep "*" | awk '{print $2}')
REPO=$(git remote)

cd /home/mosheng/github/c-program

git add .
git commit -m update
git push $REPO $BRANCH

echo "仓库： $REPO  分支: $BRANCH 被更新"
