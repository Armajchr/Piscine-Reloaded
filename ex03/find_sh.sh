find . -type f \( -name '*.sh' \) -print | cut -d. -f 2 | cut -d/ -f 2
