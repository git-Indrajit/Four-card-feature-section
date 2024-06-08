@import url('https://fonts.googleapis.com/css2?family=Poppins:ital,wght@0,100;0,200;0,300;0,400;0,500;0,600;0,700;0,800;0,900;1,100;1,200;1,300;1,400;1,500;1,600;1,700;1,800;1,900&display=swap');

*{
    padding: 0;
    margin: 0;
    box-sizing: border-box;
}

body{
    font-size: 0.938rem;
    font-family: "Poppins", sans-serif;
    background-color:  hsl(0, 0%, 98%);
    color: hsl(229, 6%, 66%);
}

.container{
  max-width: 75rem;
  margin: 0 auto;
  padding: 3.125rem 1.875rem;
}

header{
  text-align: center;
}
header h2{
  font-size: 2.125rem;
  font-weight: 200;
  color: hsl(234, 12%, 34%)d;
}

header h3{
  font-size: 2.125rem;
  font-weight: 600;
  color: hsl(234, 12%, 34%)d;
}
header p{
  max-width: 37.5rem;
  margin: 0 auto;
  margin-top: 1.25rem;
}

.main{
  display: grid;
  grid-template-columns: 1fr 1fr 1fr;
  gap: 1.563rem;
  margin-top: 3.75rem;
}

.box{
  background-color: hsl(0, 0%, 98%);
  border-radius: 0.438rem;
  padding: 1.875rem;
  text-align: right;
}

.box-text{
  text-align: left;
  padding-bottom:3.125rem ;
}

.box1{
  border-top: 0.25rem solid hsl(180, 62%, 55%);
}

.box2{
  border-top: 0.25rem solid hsl(0, 78%, 62%);
}

.box3{
  border-top: 0.25rem solid  hsl(34, 97%, 64%);
}

.box4{
  border-top: 0.25rem solid hsl(212, 86%, 64%);
}

.box-text h5{
  font-size: 1.25rem;
  color: hsl(234, 12%, 34%);
  margin-bottom: .625rem;
}
.box-container{
  display: flex;
  flex-direction: column;
  gap: 1.563rem;
}

.box1,.box4{
  align-self: center;
}

.attribution {
  font-size: 11px;
  text-align: center;
}
.attribution a {
  color:  hsl(0, 0%, 98%);
}


@media screen and (max-width:48rem) {
  .main{
    grid-template-columns: 1fr;
  }
}

@media screen and (max-width:26.563rem) {
  body{
    font-size: 0.813rem;
  }
  header h2{
    font-size: 1.375rem;
  }

  header h3{
    font-size: 1.375rem;
  }

  .box{
    padding: 1.25rem;
  }

  .box-text{
    padding-bottom: 1.875rem;
  }
}
