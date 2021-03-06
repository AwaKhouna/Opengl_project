#pragma once

#include "cgp/cgp.hpp"
#include "terrain.hpp" 

using namespace cgp;




float evaluate_lac_height(float x, float y);
cgp::mesh create_lac_mesh(int N, float length);
void update_lac(mesh& lac, mesh_drawable& lac_visual, perlin_noise_parameters & parameters);
void update_lac_time(mesh& lac, mesh_drawable& lac_visual,float t);
void dynamic_update(mesh& mesh_shape, mesh_drawable& drawable, float t);



