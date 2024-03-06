#!/bin/bash

read X
read Y

calc=$((X + Y))
echo "$calc"

calc=$((X - Y))
echo "$calc"

calc=$((X * Y))
echo "$calc"

calc=$((X / Y))
echo "$calc"