import time
import plane_sprites
import pygame
pygame.init()
#背景
screen = pygame.display.set_mode((480,700))
bg = pygame.image.load("./images/background.png")
screen.blit(bg,(0,0))

#英雄飞机
hero = pygame.image.load("./images/me1.png")
screen.blit(hero,(200,500))

#动画效果
clock = pygame.time.Clock()

hero_rect = pygame.Rect(150,300,102,126)

#创建精灵

enemy = plane_sprites.GameSprite("./images/enemy1.png")

enemy1 = plane_sprites.GameSprite("./images/enemy1.png",2)
enemy_group = pygame.sprite.Group(enemy,enemy1)

pygame.display.update()

while True:

    clock.tick(60)
    hero_rect.y -= 2
    if hero_rect.y <= -100:
        hero_rect.y = 760
    screen.blit(bg,(0,0))
    screen.blit(hero,hero_rect)

    enemy_group.update()

    enemy_group.draw(screen)



    pygame.display.update()

    for event in pygame.event.get():
        if event.type == pygame.QUIT:
            print("退出游戏")
            pygame.quit()
            exit()

pygame.quit()