extends Sprite

#onready var nave = get_node("../Ship")
export(NodePath) var nave

var time = 0.0

func _ready():
	if nave:
		nave = get_node(nave)
	else:
		set_process(false)

func _process(delta):
	time += delta*0.5
	material.set_shader_param("des", (nave.global_position.x -80) * 0.002)
	material.set_shader_param("time", time)
