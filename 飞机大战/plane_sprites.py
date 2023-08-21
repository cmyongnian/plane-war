import random
import pygame
import plane_main
SCREEN_RECT = pygame.Rect(0,0,480,700)
ZHENLV = 60
HERO_KP = pygame.USEREVENT + 1

ENEMY_DSQ = pygame.USEREVENT

class GameSprite(pygame.sprite.Sprite):
    def __init__(self,image_name,speed=1):
        super(GameSprite, self).__init__()
        self.image = pygame.image.load(image_name)
        self.rect = self.image.get_rect()
        self.speed = speed


    def update(self):
       self.rect.y +=self.speed

class Background(GameSprite):
    def update(self):
        super(Background, self).update()
        if self.rect.y >= SCREEN_RECT.height:
            self.rect.y = -self.rect.height

class Enemy(GameSprite):
    def __init__(self):
        super(Enemy, self).__init__("./images/enemy1.png")
        self.speed = random.randint(1, 3)
        self.rect.bottom = 0
        max_x = SCREEN_RECT.width - self.rect.width

        self.rect.x = random.randint(0, max_x)

    def update(self):
        super(Enemy, self).update()

        if self.rect.y >= SCREEN_RECT.height:
            self.kill()
    def __del__(self):
        print("敌机凉了")


class Hero(GameSprite):
    def __init__(self):
        super(Hero, self).__init__("./images/me1.png", 0)

        self.rect.centerx = SCREEN_RECT.centerx
        self.rect.bottom = SCREEN_RECT.bottom - 120

        self.bullets = pygame.sprite.Group()

    def update(self):
        self.rect.x += self.speed
        self.rect.y += self.speedy

        if self.rect.x <0:
            self.rect.x = 0
        elif self.rect.right > SCREEN_RECT.right:
            self.rect.right = SCREEN_RECT.right
        elif self.rect.y < 0:
            self.rect.y = 0
        elif  self.rect.y > 600:
            self.rect.y = 600



    def fire(self):
        for i in (0,1,2):
            bullet = Bullet()
            bullet.rect.bottom = self.rect.y - 20*i
            bullet.rect.centerx = self.rect.centerx
            self.bullets.add(bullet)



class Bullet(GameSprite):
    def __init__(self):
       super(Bullet, self).__init__("./images/bullet1.png", -5)

    def update(self):
        super(Bullet, self).update()

        if self.rect.bottom <0:
            self.kill()



