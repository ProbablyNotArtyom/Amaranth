#!/bin/bash
hexdump $1 -v -e '"" 1/1 "%02X" "\n"' > $2
