# C
All my projects, algorithms, and codes in the C language

Repository layout
- `2022/`, `2023/`, ... : per-year folders with C sources and small READMEs
- `bin/` (optional): build outputs (ignored by git)
- `remotes/` : helper location for local bare remotes (not tracked)

Preferred workflow
- Keep this repo as the single canonical working repository.
- Use a bare repository as the central remote (recommended). Example local path: `remotes/C.git`.
- For simple builds, add per-year `Makefile` files that place executables into `bin/<year>/`.

See `.gitignore` for ignored files and `2022/README.md` for an example per-year README.
