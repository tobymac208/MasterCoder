from django.db import models


""" Have something on your mind? Stick it in a note! """
class Note(models.Model):
    title = models.CharField(max_length=255)
    description = models.CharField(max_length=255)
