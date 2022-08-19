extends Node2D

var chosen = 0
onready var velY = rand_range(30, 150)
onready var velX = rand_range(-100, 100)

func _ready():
	randomize()
	for a in  $Asteroids.get_children():
		a.visible = false
	chosen = randi() % $Asteroids.get_child_count() + 1
	var node = get_node("Asteroids/Asteroid-"+ str(chosen))
	node.visible = true
	$area/shape.shape.radius = node.texture.get_width() / 2

func _process(delta):
	translate(Vector2(velX, velY)*delta)
	if global_position.x > 200:
		global_position.x = -40
	if global_position.x < -40:
		global_position.x = 200

func _on_area_area_entered(area):
	get_tree().call_group("camera", "shaking", 2)
	queue_free()
