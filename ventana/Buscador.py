from Tkinter import *
from tkMessageBox import askokcancel           

#closes the window
class Quitter(Frame):                          
    def __init__(self, parent=None):           
        Frame.__init__(self, parent)
        self.pack()
        widget = Button(self, text='Quit', command=self.quit)
        widget.pack(expand=YES, fill=BOTH, side=LEFT)
    def quit(self):
        ans = askokcancel('Verify exit', "Really quit?")
        if ans: Frame.quit(self)

def fetch():
    print 'Input => "%s"' % ent.get()          
# create the root window
root = Tk()

ent = Entry(root)
ent.insert(0, 'Type words here')
ent.pack(side=TOP, fill=X)

ent.focus()
ent.bind('<Return>', (lambda event: fetch()))
btn = Button(root, text='Fetch', command=fetch) 
btn.pack(side=LEFT)
Quitter(root).pack(side=RIGHT)


# modify the window
root.title("Summoner Finder ")
root.geometry("450x450")

# Start the window's event-loop
root.mainloop()

"""

fda
1-textboxes and labels
2-open another window with stats

"""
