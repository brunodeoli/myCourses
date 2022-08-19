extends Node2D

const PRE_LASER = preload("res://scenes/laser.tscn")
const WALL_MAX_X = 22
const WALL_MIN_X = 140
const WALL_MAX_Y = 24
const WALL_MIN_Y = 266

export var vel = 60.0

export(NodePath) var lasers

func _ready():
	if lasers:
		lasers = get_node(lasers)
	else:
		lasers = get_parent()

func _process(delta):
	var movX = 0
	var movY = 0
	
	if Input.is_action_pressed("ui_right"):
		movX += 1
	if Input.is_action_pressed("ui_left"):
		movX += -1
	if Input.is_action_pressed("ui_down"):
		movY += 1
	if Input.is_action_pressed("ui_up"):
		movY += -1
	if Input.is_action_just_pressed("ui_accept"):
		if get_tree().get_nodes_in_group("lasers").size() < 3:
			var laser = PRE_LASER.instance()
			lasers.add_child(laser)
			laser.global_position = $blaster.global_position
	
	translate(Vector2(movX,movY)*vel*delta)
	
	global_position.x = clamp(global_position.x, WALL_MAX_X, WALL_MIN_X)
	global_position.y = clamp(global_position.y, WALL_MAX_Y, WALL_MIN_Y)
	
	pass
