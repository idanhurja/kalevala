#!/usr/bin/env -iS /opt/pwn.college/bash

/bin/echo "14.12.2024 Idanhurja found that the intended solution for this challange no longerable able to be used to get flag."
/bin/echo "The purspose of this script is to check if intended solution is performed"
/bin/echo "and if its performed, grant to flag."
/bin/echo ""

/bin/echo "Checking if intended solution is performed.."
/bin/echo ""

if /bin/id -u root &>/dev/null; then
    /bin/echo "Intended solution not found, no flag."
else
    /bin/echo "Intended solution found. Here is your flag:"
    /bin/cat /flag
fi