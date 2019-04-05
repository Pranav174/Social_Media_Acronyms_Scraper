from bs4 import BeautifulSoup
import requests
from urllib.request import urlopen


class acronym:
    def __init__(self, name, meaning):
        self.name = name
        self.meaning = meaning


my_acronyms = []


link = "https://pc.net/slang/"
html_page = urlopen(link)
soup = BeautifulSoup(html_page, 'lxml')
Acrlinks = soup.find_all('td', {'class': "acronym"})
count = 1
for acr in Acrlinks:
    # print(acr.a['href'])
    html_page = urlopen(link + acr.a['href'])
    # html_page = urlopen("https://pc.net/slang/meaning/lol")
    soup = BeautifulSoup(html_page, 'lxml')
    name = soup.h2.string
    # print(soup.h2.string)
    definations = soup.find_all('table', {'class': "display"})
    for meaning in definations:
        # print(name)
        # print(meaning.tr.find_all('th')[1].text)
        # print()
        my_acronyms.append(acronym(name, meaning.tr.find_all('th')[1].text))


for acr in my_acronyms:
    print(acr.name)
    print(acr.meaning)
    print()
