#include "test.hpp"
#include "godot_cpp/core/class_db.hpp"
#include <godot_cpp/core/print_string.hpp>

void test::say_hello()
{
    godot::print_line("Hello from the test class!");
}

void test::_bind_methods()
{
    godot::ClassDB::bind_method(godot::D_METHOD("say_hello"), &test::say_hello);
    godot::ClassDB::bind_method(godot::D_METHOD("get_my_data"), &test::get_my_data);
    godot::ClassDB::bind_method(godot::D_METHOD("set_my_data", "data"), &test::set_my_data);
    ADD_PROPERTY(godot::PropertyInfo(godot::Variant::STRING, "my_data"), "set_my_data", "get_my_data");
}

godot::String test::get_my_data() const
{
    return my_data;
}

void test::set_my_data(const godot::String &p_data)
{
    my_data = p_data;
}


