#!/bin/bash
set -e

USER=$(whoami) 

SRC="/home/$USER/.config"
DST="/home/$USER/Documents/kustomize"

if [ ! -d "$DST" ]; then
    mkdir -p "$DST"
fi

cp -a "$SRC/" "$DST/"