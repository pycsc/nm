# nm (ft_nm) Review Todos

Tested in `docker.io/library/alpine:3.20` (`aarch64`, `gcc` + `musl-dev` + `binutils`).
Build (`make re` with `-Wall -Wextra -Werror`) succeeded; `test.sh` reported **7 passed, 48 failed** (all 7 error-case E2E tests passed; symbol-comparison tests failed).

- [ ] **[P1][bug][elf64][aarch64]** `srcs/elf64.c` (`skip_symbol_64`): Filter out ARM64 ELF mapping symbols (`$x`, `$d`, `$a`, `$t` with `STB_LOCAL`) unless `-a` / special-syms is requested, matching GNU `nm` on `aarch64`.
- [ ] **[P2][bug][sorting][locale]** `srcs/sort.c` (`compare_symbols`): Align symbol sorting with `LC_ALL=C` / system `nm` behavior on `musl`/Alpine (currently uses `ft_strcmp_nocase` which differs on `_`, `.`, and case).
- [ ] **[P2][test][unit-functional]** Add dedicated Unit (`tests/unit`) and Functional (`tests/functional`) test suites alongside `test.sh`.
