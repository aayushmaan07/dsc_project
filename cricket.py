import random
import time
total_run=0
team_name=input("Enter your team name\n")
print("COMPUTER Vs ",team_name)
time.sleep(1)
def toss():
	print("Both the team ready for toss")
	global choice_for_bob
	time.sleep(1)
	choice=int(input("enter 1 for odd and 0 for even\n"))
	time.sleep(1)
	x=random.uniform(0,7)
	toss_value2=int(x)
	toss_value1=int(input("Enter any number between 0 to 6\n"))
	print("the Value taken by COMPUTER is ",toss_value2)
	total=toss_value1+toss_value2
	if(total%2==0 and choice==0):
		print(team_name," won the toss")
		choice_for_bob=int(input("enter 1 for batting and 0 for balling\n"))
	elif(total%2!=0 and choice==1):
		print(team_name," won the toss")
		choice_for_bob=int(input("enter 1 for batting and 0 for balling\n"))
	else:
		print("COMPUTER won the toss")
		choice_for_bob=int(random.uniform(0,2))
		if choice_for_bob ==0:
			print("COMPUTER has choosen for batting")
		elif choice_for_bob==1:
			print("COMPUTER has choosen for bowling")
toss()
# print("choice of bob is ",choice_for_bob)
if choice_for_bob == 1:
	c=int(input("enter number of wikets you wants to play for\n"))
	p=c
	k=c
	while c>0:
		x= int(input("enter the run\n"))
		y=int(random.uniform(0,7))
		print("The bowling value choosen by COMPUTER is",y)
		if x is y:
			print("OUT!")
			c=c-1
			if c>0:
				print(team_name," have only ",c," wickets left")
			print("total score is ",total_run)
		else:
			total_run+=x
			print("total score is ",total_run)
	target=total_run
	total_run=0
	print("Target for COMPUTER is ",target+1)
	while p>0:
			if total_run>target:
				break
			x= int(input("enter the bowling number\n"))
			y=int(random.uniform(0,7))
			print("the run hit by COMPUTER is",y)
			if x is y:
				print("OUT!")
				p=p-1
				if p>0:
					print("COMPUTER have",p,"wickets left")
				print("total score is ",total_run)
			else:
				total_run+=y
				print("total score is ",total_run)
	if(total_run>target):
		print("SCORCARD")
		print(team_name,"-",target,"/",k-c)
		print("COMPUETR-",total_run,"/",p-c)
		print("COMPUTER Won The Match By ",p," wicket")
	elif(total_run<target):
		print("SCORECARD")
		print(team_name,"-",target,"/",k-c)
		print("COMPUTER-",total_run,"/",p-c)
		print(team_name," won by ",(target-total_run)," runs")
	else:
		print("The match is draw")
elif choice_for_bob == 0:
	c=int(input("enter number of wikets you wants to play "))
	p=c
	k=c
	while c>0:
		x= int(input("enter the balling number"))
		y=int(random.uniform(0,7))
		print("The run Value choosen by COMPUTER",y)
		if x is y:
			print("OUT!")
			c=c-1
			if c>0:
				print("COMPUTER has",c," wickets left")
			print("total score is ",total_run)
		else:
			total_run+=y
			print("total score is ",total_run)
	target=total_run
	total_run=0
	print("Target for ",team_name,"is ",target+1)
	while p>0:
			if total_run>target:
				break
			x= int(input("enter the run"))
			y=int(random.uniform(0,7))
			if x is y:
				print("OUT!")
				p=p-1
				if p>0:
					print(team_name," have ",p," wicket left")
				print("Total score of ",team_name," is ",total_run)
			else:
				total_run+=x
	if(total_run>target):
		print("SCORECARD")
		print(team_name,"-",total_run,"/",p-c)
		print("COMPUTER-",target,"/",k-c)
		print(team_name,"won by ",p," wicket")
	elif(total_run<target):
		print("SCORCARD")
		print(team_name,"-",total_run,"/",p-c)
		print("COMPUETR-",target,"/",k-c)
		print("COMPUTER Won The Match By ",(target-total_run)," runs")
	else:
		print("The match is draw")
