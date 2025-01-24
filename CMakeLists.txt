cmake_minimum_required(VERSION 3.10)  # Minimum version recommandée
project(DogoRent)  # Nom du projet

# Définit le standard C++ à utiliser
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# Ajoute tous les fichiers sources nécessaires
add_executable(dogorent src/main.cpp)
