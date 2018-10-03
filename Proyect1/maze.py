# MAZE.PY
import turtle

class maze():
	def __init__(self):
		#register shapes
		turtle.register_shape("star.gif")
		turtle.register_shape("kirby.gif")
		turtle.register_shape("wall3.gif")
		
		#create Pen
		class Pen(turtle.Turtle):
			def __init__(self): #special comand
				turtle.Turtle.__init__(self)
				self.shape("square")
				#self.color("white")
				self.penup()
				self.speed(0)

		#create player
		class Player(turtle.Turtle):
			def __init__(self):
				turtle.Turtle.__init__(self)
				self.shape("kirby.gif")
				#self.color("green")
				self.pencolor("black")
				self.penup()		
				self.speed(0)
			
			def go_up(self):
				move_to_x = player.xcor()
				move_to_y = player.ycor() + 24
			
				if (move_to_x, move_to_y) not in walls:
					self.goto(move_to_x, move_to_y)
				
			def go_down(self):
				move_to_x = player.xcor()
				move_to_y = player.ycor() - 24
				
				if (move_to_x, move_to_y) not in walls:
					self.goto(move_to_x, move_to_y)
				
			def go_left(self):
				move_to_x = player.xcor() - 24
				move_to_y = player.ycor()
				
				self.shape("kirby.gif")
 
				if (move_to_x, move_to_y) not in walls:
					self.goto(move_to_x, move_to_y)

			def go_right(self):
				move_to_x = player.xcor() + 24
				move_to_y = player.ycor()
				
				self.shape("kirby.gif")
 				
				if (move_to_x, move_to_y) not in walls:
					self.goto(move_to_x, move_to_y)
					
			def is_collision(self, other):
				if (self.xcor(), self.ycor()) in other:
					print("GANASTE")
					return True
				else:
					return False

		#wn=window		
		wn = turtle.Screen()		
		wn.clear()
		wn.bgcolor("black")
		wn.title("Juego del Laberinto")
		wn.screensize(canvwidth=700, canvheight=700, bg=None)
		
		self.window = wn
				

		#create levels list
		levels = [""]

		#define level 1
		level_1 = [
		"XXXXXXXXXXXXXXXXXXXXXXXXX",
		"XP XXXXXXX          XXXXX",
		"X  XXXXXXX  XXXXXX  XXXXX",
		"X       XX  XXXXXX  XXXXX",
		"X       XX  XXX        XX",
		"XXXXXX  XX  XXX        XX",
		"XXXXXX  XX  XXXXXX  XXXXX",
		"XXXXXX  XX    XXXX  XXXXX",
		"X  XXX        XXXX  XXXXX",
		"X  XXX  XXXXXXXXXXXXXXXXX",
		"X         XXXXXXXXXXXXXXX",
		"X                XXXXXXXX",
		"XXXXXXXXXXXX     XXXXX  X",
		"XXXXXXXXXXXXXXX  XXXXX  X",
		"XXX  XXXXXXXXXX         X",
		"XXX                     X",
		"XXX         XXXXXXXXXXXXX",
		"XXXXXXXXXX  XXXXXXXXXXXXX",
		"XXXXXXXXXX              X",
		"XX E XXXXX              X",
		"XX   XXXXXXXXXXXXX  XXXXX",
		"XX    XXXXXXXXXXXX  XXXXX",
		"XX          XXXX        X",
		"XXXXX                   X",
		"XXXXXXXXXXXXXXXXXXXXXXXXX",
		]

		#add a end list
		end = []

		#add maze to the list
		levels.append(level_1)

		#create level setup Function
		def setup_maze(level):
			for y in range(len(level)):
				for x in range(len(level[y])):
					#get the character at each x,y coordinate
					#NOTE the order of y and x in the next line
					character = level[y][x]
					#calculate the screen x, y coordinates
					screen_x = -288 + (x * 24)
					screen_y = 288 - (y * 24)
					
					#check if is X (wall)
					if character == "X":
						pen.goto(screen_x, screen_y)
						pen.shape("wall3.gif")
						pen.stamp()
						walls.append((screen_x,screen_y))

					#check if is a P (player)
					if character == "P":
						player.goto(screen_x, screen_y)
					
					#check if is a E (end)
					if character == "E":
						pen.shape("star.gif")
						pen.goto(screen_x, screen_y)
						pen.stamp()
						end.append((screen_x, screen_y))

		#create class instances
		pen = Pen()
		player = Player()

		walls = []

		#Set up level
		setup_maze(levels[1])
		player.pd()
		#print(walls)

		#Controls
		turtle.listen()
		turtle.onkey(player.go_left,"Left")
		turtle.onkey(player.go_right,"Right")
		turtle.onkey(player.go_down,"Down")
		turtle.onkey(player.go_up,"Up")

		#or
		turtle.onkey(player.go_left,"a")
		turtle.onkey(player.go_right,"d")
		turtle.onkey(player.go_down,"s")
		turtle.onkey(player.go_up,"w")

		#Main Game Loop	
		while True:		
			#update screen
			wn.update()
			#check for player collision with end (call is_collision)
			if player.is_collision(end):				
				break
	def get_window(self):
		return self.window
				
#menu
while True:	
	print ("Elija una opcion:")
	print("(1) Jugar")
	print("(2) Ruta")
	print("(3) Instrucciones")
	print("(4) Salir")
	option = int(input())
	if option == 1:			
		game = maze()		
	else:
		if option == 2:
			window = game.get_window()
			window.bgcolor("grey")
		if option == 3:
			print("Ayuda a Kirby a llegar a la estrella.")
			print("Para desplazarte puedes utilizar las teclas direcionales.")
		if option == 4:
			print("Bye bye")
			break		
			
