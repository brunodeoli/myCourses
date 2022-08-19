extends Node2D

const PRE_ASTEROID = preload("res://scenes/Asteroid.tscn")
export(NodePath) var nave 

func _ready():
	restartTimer()

func _process(delta):
	pass

func _on_spawn_timer_timeout():
	var ast = PRE_ASTEROID.instance()
	add_child(ast)
	ast.global_position = Vector2(rand_range(30,130),-60)

func restartTimer():
	$spawn_timer.wait_time = rand_range(.2, 1)
	$spawn_timer.start()
