cmake_minimum_required(VERSION 3.10)

project(ShaderEngine)

set("VULKANDIR" "D:/VulkanSDK/1.4.304.1")

# Add include directories
include_directories(${CMAKE_SOURCE_DIR}/vcpkg_installed/x86-windows/include)
include_directories(${VULKANDIR}/Include)

# Link library files
link_directories("${CMAKE_SOURCE_DIR}/vcpkg_installed/x86-windows/lib/")
link_libraries("${VULKANDIR}/Lib/vulkan-1.lib")

#find_package()

#link_libraries(${CMAKE_SOURCE_DIR}/vcpkg-installed/lib/)

add_executable(ShaderEngine application/main.cpp)

target_link_libraries(ShaderEngine PRIVATE glm glfw3dll "${VULKANDIR}/Lib/vulkan-1.lib")