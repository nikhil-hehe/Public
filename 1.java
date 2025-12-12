class Animal {
    String name;
    String sound;

    Animal(String name, String sound) {
        this.name = name;
        this.sound = sound;
    }

    void display() {
        System.out.println("Name: " + name);
        System.out.println("Sound: " + sound);
    }
}

class Dog extends Animal {
    String breed;

    Dog(String name, String sound, String breed) {
        super(name, sound); 
        this.breed = breed;
    }

    void display() {
        super.display();
        System.out.println("Breed: " + breed);
    }

    public static void main(String[] args) {
        Dog d = new Dog("Buddy", "Bark", "Labrador");
        d.display();
    }
}
