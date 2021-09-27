var fillColor = function (image, sr, sc, newColor, oldColor) {
    if (
        sr < 0 ||
        sr + 1 > image.length ||
        sc < 0 ||
        sc + 1 > image[0].length ||
        image[sr][sc] != oldColor ||
        image[sr][sc] == newColor
    ) {
        return image;
    }
    image[sr][sc] = newColor;
    image = fillColor(image, sr + 1, sc, newColor, oldColor);
    image = fillColor(image, sr - 1, sc, newColor, oldColor);
    image = fillColor(image, sr, sc + 1, newColor, oldColor);
    image = fillColor(image, sr, sc - 1, newColor, oldColor);
    return image;
};

/**
 * @param {number[][]} image
 * @param {number} sr
 * @param {number} sc
 * @param {number} newColor
 * @return {number[][]}
 */
var floodFill = function (image, sr, sc, newColor) {
    return fillColor(image, sr, sc, newColor, image[sr][sc]);
};
