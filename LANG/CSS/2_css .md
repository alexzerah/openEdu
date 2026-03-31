# CSS

le CSS s'utilise pour donner forme au HTML.

4 blocs à maitriser : 

- Layout (flex, grid, position)
- Box model (margin, padding, border)
- Visuel (couleurs, typo, background)
- Dynamique (transform, transition)

## Ajouter un lien a une balise HTML

Dans la balise `<head>`, ajouter
```html
<link rel="stylesheet" href="style.css">
```

## Selection des balises

On peut sélectionner une balise de plusieurs manières.

via 
- un id :`#myParagrah`
- une classe : `.paragraphs`
- une balise : `p`

Les balises CSS

```css
color: #4564de;
background-color: red;
```

## Display

- block
- inline
- flex
- grid

## Position

- static
- relative
- absolute
- fixed
- sticky

## Top / right / bottom / left

- `top: 0;`
- `left: 50px;`


## width / height

- `width: 200px;`
- `height: 100px;`


## Margin et padding

### Margin 

Sont exterieurs

### Padding

sont interieurs

## Border

`border: 1px solid black;`

## box-sizing

`boz-sizing: border-box;`


## Grid

```css
.container {
	display: grid;
}
```

Colonnes
```css
grid-template-columns: 200px 1fr 1fr;
```

Lignes
```css
grid-template-rows: 100px auto;
```

## Flex

### container parent

```css
display: flex;
flex -direction: row;
justify-content: center;
align-items: center;
gap: 10px;
```
### Items

```css
flex: 1;
align-self: center;
```

## Transition

## Transform
