cmake_minimum_required(VERSION 3.10)  # Minimum version recommandée
project(DogoRent)  # Nom du projet

# Définit le standard C++ à utiliser
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# Ajouter le dossier contenant linenoise-ng
add_subdirectory(src/external/linenoise)




# Ajouter les sous-dossiers à inclure
include_directories(src/external)
include_directories(src/presentation)
include_directories(src/business)
include_directories(src/data)
include_directories(src/models)


# Ajoute tous les fichiers sources nécessaires
add_executable(dogorent
    src/main.cpp
    src/main.cpp
    src/presentation/cli/CliManager.cpp
    src/presentation/cli/CommandHandler.cpp
    src/business/TenantService.cpp
    src/data/TenantRepository.cpp
    src/models/Tenant.cpp
)

# Inclure linenoise-ng dans votre exécutable
target_link_libraries(dogorent PRIVATE linenoise)