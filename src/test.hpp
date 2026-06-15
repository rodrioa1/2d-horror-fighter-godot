#pragma once

#include <godot_cpp/classes/wrapped.hpp>
#include <godot_cpp/classes/node.hpp>
#include <godot_cpp/variant/string.hpp>
class test: public godot::Node
{
	GDCLASS(test, godot::Node)
	// This can be used by anyone, including code outside of this class
	public:
	
	// This can only be inherited by other classes, but not instantiated directly
	protected:
		static void _bind_methods();

	// This can only be used within this class, not even by derived classes 
	// Recommended to use this for now and its only purpose is to test if the class can be registered and used in Godot
	// hpp - header file, contains the declaration of the class and its members
	// cpp - source file, contains the implementation of the class and its members
	private:
		godot::String my_data = "The beginning of something great";
		godot::String get_my_data() const;
		void set_my_data(const godot::String &p_data);
		void say_hello(); 	
	



 };
