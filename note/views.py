from django.shortcuts import render
from . models import Note

def index(request):
    notes = Note.objects.get()
    return render(request, 'index.html')
