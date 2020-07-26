#!/bin/sh

template=/Users/mamoru/Documents/atcoder/templates/template.$2

if [ ! -e $template ]; then
  echo "No templates for that extension.[$2]"
  touch $template
fi

if [ ! -e $1 ]; then
  echo "Creating $1."
  mkdir $1
fi

cd $1

if [ ! -e $2 ]; then
  echo "Creating $2 in $1."
  mkdir $2
  cd $2
  cat $template > a.$2
  cat $template > b.$2
  cat $template > c.$2
  cat $template > d.$2
  cat $template > e.$2
  cat $template > f.$2
fi
