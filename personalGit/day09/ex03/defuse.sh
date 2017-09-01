#!/bin/bash
echo ($($ stat -f%c bomb.txt) - 1)
