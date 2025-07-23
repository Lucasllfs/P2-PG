#include "rtweekend.h"

#include "camera.h"
#include "hittable.h"
#include "hittable_list.h"
#include "sphere.h"
#include "material.h"






int main() {

   hittable_list world;

     auto ground_material = make_shared<lambertian>(color(0.8, 0, 0));
    world.add(make_shared<sphere>(point3(0, -1000, 0), 1000, ground_material));

// Esfera 1: metal polido (dourado)
auto mat_dourado = make_shared<metal>(color(1.0, 0.84, 0.0), 0.0); 
world.add(make_shared<sphere>(point3(-1, 0.5, -2), 0.5, mat_dourado));

// Esfera 2: vidro
auto mat_vidro = make_shared<dielectric>(1.5);
world.add(make_shared<sphere>(point3(-1, 0.5, -0.8), 0.5, mat_vidro));

// Esfera 3: metal fosco (preto)
auto mat_metal2 = make_shared<metal>(color(0.0, 0.0, 0.0), 0.5);
world.add(make_shared<sphere>(point3(1, 0.3, 1), 0.3, mat_metal2));

// Esfera 4: difusa vermelha
auto mat_difusa = make_shared<lambertian>(color(0.7, 0.3, 0.3));
world.add(make_shared<sphere>(point3(-2, 0.5, -1), 0.5, mat_difusa));

// Esfera 5: difusa roxa
auto mat_difusa2 = make_shared<lambertian>(color(0.6, 0.1, 0.7));
world.add(make_shared<sphere>(point3(0, 0.5, 2), 0.5, mat_difusa2));

// Esfera 6: vidro grande
auto material1 = make_shared<dielectric>(1.5);
world.add(make_shared<sphere>(point3(0, 1.0, 0), 1.0, material1));

// Esfera 7: difusa marrom grande
auto material2 = make_shared<lambertian>(color(0.4, 0.2, 0.1));
world.add(make_shared<sphere>(point3(-4, 1.0, 0), 1.0, material2));

// Esfera 8: metal grande
auto material3 = make_shared<metal>(color(0.7, 0.6, 0.5), 0.0);
world.add(make_shared<sphere>(point3(4, 1.0, 0), 1.0, material3));

// Esfera 9: dourada central
world.add(make_shared<sphere>(point3(0.0, 0.5, 0.0), 0.5, mat_dourado));


    camera cam;

    cam.aspect_ratio      = 16.0 / 9.0;
    cam.image_width       = 1200;
    cam.samples_per_pixel = 500;
    cam.max_depth         = 50;

    cam.vfov     = 50;
    cam.lookfrom = point3(4.2,0.3,1.5);
    cam.lookat   = point3(0,1,0);
    cam.vup      = vec3(0,1,0);

    cam.defocus_angle = 0;
    cam.focus_dist    = 4.4;

    cam.render(world);

}