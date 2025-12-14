cmake_minimum_required(VERSION 3.31)
project(kustomize-backend C)
add_executable(kustomize-backend 
    main.c
    src/export.c
    src/select.c
    src/getUser.c
)