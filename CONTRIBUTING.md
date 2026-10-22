# Contributing

## 1. Pick an issue

- Pick an issue from the Ready column on the project board
- Assign yourself so nobody else starts the same issue
- If there is no issue for what you want to do, let the embedded lead know, and then make one

## 2. Make a branch

Never work directly on main. Name the branch with the issue number and a few words.

    git checkout main
    git pull
    git checkout -b 7-ratio-calculation

## 3. Commit small and often

Start each commit message with the type of change (use Conventional Commits).

- `feat:` new code that adds something
- `fix:` fixes a bug
- `test:` adds or changes tests
- `docs:` README, guides, comments
- `chore:` setup and cleanup

Example

- `feat: add ratio calculation with darkness check`

## 4. Open a pull request

- Push your branch and open a pull request into main
- Write `Closes #7` in the description so the issue closes when it merges
- Fill out the testing checklist
- Send a message on discord in #light-tracker-embedded and it will get reviewed

## 5. Review

- Check that the code does what the issue says and that it was tested
- Leave comments as questions or suggestions
- The author fixes things and pushes again on the same branch
- The embedded lead will merge once it is approved

## Using AI tools

AI tools are okay to use, however you are still responsible for the code. Before opening a pull request, make sure you tested it and can explain every part. Keep pull requests small enough for a reviewer to read and include comments and screenshots (if necessary) to explain your work. 

## Test data

Save every test as a CSV in `test-data/` with the date in the name, like `2026-10-24-sweep-no-film.csv`. Describe the setup in the issue.
