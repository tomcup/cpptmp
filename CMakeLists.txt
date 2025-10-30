cmake_minimum_required(VERSION 4.1.1)

project(Tutorial LANGUAGES CXX)

add_executable(${PROJECT_NAME})

target_sources(${PROJECT_NAME} PRIVATE
	main.cpp
)