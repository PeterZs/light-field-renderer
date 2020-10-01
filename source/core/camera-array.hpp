#pragma once

#include <filesystem>

#include <glm/glm.hpp>

class CameraArray
{
public:
    CameraArray(const std::filesystem::path& path);
    ~CameraArray();

    void bind(size_t index, int eye_loc, int VP_loc = -1);

    struct Camera
    {
        glm::ivec2 size;
        glm::vec2 uv;
        int pixel_format;
        std::string path;
        unsigned int texture;

        float focal_length;
        float sensor_width;
        glm::mat4 VP;
    };

    bool light_slab;

    glm::vec2 uv_size;

    std::vector<Camera> cameras;
};