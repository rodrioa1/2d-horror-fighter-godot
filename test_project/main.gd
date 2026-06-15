extends Node2D

func _ready() -> void:
	horror_fighter()

func horror_fighter()->void:
	var myclass:test = test.new()
	myclass.say_hello()
	print(myclass.my_data)
	myclass.my_data = "Hola"
	print(myclass.my_data)
	

	
	
	
	
	
