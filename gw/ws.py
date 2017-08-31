import urllib
import re
urls=['https://www.google.com','https://www.reddit.com/r/','https://developer.riotgames.com/']
regex='<title>(.+?)</title>'
pattern = re.compile(regex)
for url in urls:
    htmlfile = urllib.urlopen(url)
    htmltxt= htmlfile.read()
    titles=re.findall(pattern,htmltxt)
    print titles
