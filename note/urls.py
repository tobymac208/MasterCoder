from django.urls import path
from . import views


## Defines all url associations ##
url_patters = [
    path('', views.index),
]
