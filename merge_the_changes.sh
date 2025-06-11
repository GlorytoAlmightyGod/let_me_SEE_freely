rm -rf *.out
git add .
git status
git commit -m "$@"    # expects the argument(enclosed within double quotes) to be the commit message.
git push