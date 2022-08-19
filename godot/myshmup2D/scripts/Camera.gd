extends Camera2D

var time = 0
var force = 0

func _ready():
	pass

func _process(delta):
	if force > 0: 
		time += delta*100
		global_position = Vector2(force, force).rotated(time)
		force = lerp(force, 0, 0.01)
		
		
#	if Input.is_action_just_pressed("ui_cancel"):
#		print("A")
#		shaking(2)

func shaking(v):
	force = v
