#pragma once

#include "cgp/cgp.hpp"
#include "terrain.hpp"
#include "key_positions_structure.hpp"
#include "environment_camera_head/environment_camera_head.hpp"

// The element of the GUI that are not already stored in other structures
struct gui_parameters {
	bool display_frame      = false;
	bool display_wireframe  = false;
	float speed = 0.0f; 
};



// The structure of the custom scene
struct scene_structure {
	
	// ****************************** //
	// Elements and shapes of the scene
	// ****************************** //

	cgp::mesh_drawable global_frame;          // The standard global frame
	scene_environment_camera_head environment;
	cgp::inputs_interaction_parameters inputs; // Storage for inputs status (mouse, keyboard, window dimension)

	keyframe_structure keyframe;
	keyframe_structure keyframe1;
	gui_parameters gui;                       // Standard GUI element storage
	cgp::timer_interval time;
	
	cgp::skybox_drawable skybox;

	cgp::hierarchy_mesh_drawable hierarchy;
	cgp::mesh rectangle_mesh1;
	cgp::mesh rectangle_mesh2;
	cgp::mesh terrain_mesh;
	cgp::mesh lac_mesh;
	cgp::mesh_drawable rectangle1;
	cgp::mesh_drawable rectangle2;
	cgp::mesh_drawable terrain;
	cgp::mesh_drawable lac;
	cgp::mesh_drawable trunk;
	cgp::mesh_drawable branches;
	cgp::mesh_drawable foliage;
	std::vector<cgp::vec3> tree_position;
	perlin_noise_parameters parameters;

	// ****************************** //
	// Functions
	// ****************************** //

	void update_camera();
	void initialize();  // Standard initialization to be called before the animation loop
	void display();     // The frame display to be called within the animation loop
	void display_gui(); // The display of the GUI, also called within the animation loop
	void mouse_move();

};





